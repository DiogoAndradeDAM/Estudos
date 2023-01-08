using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;

namespace Testes;

public class Game1 : Game
{
    private GraphicsDeviceManager _graphics;
    private SpriteBatch _spriteBatch;
    private SpriteFont _fontGame;

    public int score;
    public bool mbLeftIsPressed = false;

    public Game1()
    {
        _graphics = new GraphicsDeviceManager(this);
        Content.RootDirectory = "Content";
        IsMouseVisible = true;

        _graphics.PreferredBackBufferWidth = 1280;  // set this value to the desired width of your window
        _graphics.PreferredBackBufferHeight = 920;   // set this value to the desired height of your window
        _graphics.ApplyChanges();
    }

    protected override void Initialize()
    {
        // TODO: Add your initialization logic here

        base.Initialize();
    }

    protected override void LoadContent()
    {
        _spriteBatch = new SpriteBatch(GraphicsDevice);

        // TODO: use this.Content to load your game content here

        _fontGame = Content.Load<SpriteFont>("galleryFont");
    }

    protected override void Update(GameTime gameTime)
    {
        if (GamePad.GetState(PlayerIndex.One).Buttons.Back == ButtonState.Pressed || Keyboard.GetState().IsKeyDown(Keys.Escape))
            Exit();
        // TODO: Add your update logic here

        if (Mouse.GetState().LeftButton == ButtonState.Pressed && !mbLeftIsPressed){
            score++;
            mbLeftIsPressed = true;
        }
        if (Mouse.GetState().LeftButton == ButtonState.Released){
            mbLeftIsPressed = false;
        }

        base.Update(gameTime);
    }

    protected override void Draw(GameTime gameTime)
    {
        GraphicsDevice.Clear(Color.CornflowerBlue);

        // TODO: Add your drawing code here

        _spriteBatch.Begin();
        _spriteBatch.DrawString(_fontGame, score.ToString(), new Vector2(100, 100), Color.White);
        _spriteBatch.End();

        base.Draw(gameTime);
    }
}
