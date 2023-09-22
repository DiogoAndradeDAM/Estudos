using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;

using Testes.tools;

namespace Testes;

public class Game1 : Game
{
    private GraphicsDeviceManager _graphics;
    private SpriteBatch _spriteBatch;
    private SpriteFont font;
    private Point cursorPosition;

    private WindowManager windowManager;

    private Component2D ragoziniSprite;

    public Game1()
    {
        _graphics = new GraphicsDeviceManager(this);
        Content.RootDirectory = "Content";
        IsMouseVisible = true;
    }

    protected override void Initialize()
    {
        // TODO: Add your initialization logic here

        windowManager = new WindowManager(this._graphics, Window, 480, 270);

        base.Initialize();
    }

    protected override void LoadContent()
    {
        _spriteBatch = new SpriteBatch(GraphicsDevice);

        // TODO: use this.Content to load your game content here
        font = Content.Load<SpriteFont>("Font/Arial4");
        ragoziniSprite = new Component2D(Content.Load<Texture2D>("Sprites/ragozini"), new Vector2(200,200));
        ragoziniSprite.LinearVelocity = new Vector2(200, 200);
        ragoziniSprite.LinearRotate = 1.0f;

    }

    protected override void Update(GameTime gameTime)
    {
        if (GamePad.GetState(PlayerIndex.One).Buttons.Back == ButtonState.Pressed || Keyboard.GetState().IsKeyDown(Keys.Escape))
            Exit();

        // TODO: Add your update logic here
        //cursorPosition = Mouse.GetState().Position;

        if(Keyboard.GetState().IsKeyDown(Keys.T)){
            this.windowManager.SetFullScreen();
        }

        ragoziniSprite.Update(gameTime);

        base.Update(gameTime);
    }

    protected override void Draw(GameTime gameTime)
    {
        GraphicsDevice.Clear(Color.CornflowerBlue);
        // TODO: Add your drawing code here
        _spriteBatch.Begin();
        /*
        _spriteBatch.DrawString(font, $"{cursorPosition.X} - {cursorPosition.Y}", new Vector2(100,100), Color.Black);
        _spriteBatch.DrawString(font, $"{windowManager.WindowPosition.X} - {windowManager.WindowPosition.Y}", new Vector2(100,200), Color.Black);

        _spriteBatch.Draw(ragoziniSprite.Texture, new Rectangle((int)ragoziniSprite.Position.X, (int)ragoziniSprite.Position.Y, (int)ragoziniSprite.Size.X, (int)ragoziniSprite.Size.Y),
         null, ragoziniSprite.Color, ragoziniSprite.Rotate, ragoziniSprite.Origin, ragoziniSprite.SpriteEffect, 0);
        */

        ragoziniSprite.Draw(this._spriteBatch);
        
        _spriteBatch.End();

        base.Draw(gameTime);
    }
}
