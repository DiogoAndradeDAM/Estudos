using System;

using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;


namespace Testes.tools
{
    public sealed class WindowManager
    {
        private GraphicsDeviceManager _graphics;
        private GameWindow _gameWindow;

        public int Width {get; private set;}
        public int Height {get; private set;}
        public int Resolution { get { return this.Width/this.Height;} }

        public Point WindowPosition{ get {return this._gameWindow.Position;}}


        public WindowManager(GraphicsDeviceManager graphics, GameWindow window, int width, int height)
        {
            this._graphics = graphics;
            this._gameWindow = window;

            this.SetTitle("My Window for Tests");
            this.SetResolution(width, height);
        }

        public void SetTitle(string newTitle)
        {
            this._gameWindow.Title = newTitle;
        }

        public void SetResolution(int width, int height)
        {
            this.Width = width;
            this.Height = height;
            this._graphics.PreferredBackBufferWidth = this.Width;
            this._graphics.PreferredBackBufferHeight = this.Height;
            this._graphics.ApplyChanges();
        }

        public void SetFullScreen()
        {
            this._graphics.IsFullScreen = !this._graphics.IsFullScreen;
            this._graphics.ApplyChanges();
        }
    }
}