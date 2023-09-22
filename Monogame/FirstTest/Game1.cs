using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;

namespace FirstTest;

public class Game1 : Game
{
    private GraphicsDeviceManager _graphics;
    private SpriteBatch _spriteBatch;

    private Vector2 _ragozinePos;

    private Texture2D _ragozineSprite;

    public Game1()
    {
        _graphics = new GraphicsDeviceManager(this);
        Content.RootDirectory = "Content";
        IsMouseVisible = true;
    }

    protected override void Initialize()
    {
        // TODO: Add your initialization logic here

        _ragozinePos = new Vector2(100,100);

        base.Initialize();
    }

    protected override void LoadContent()
    {
        _spriteBatch = new SpriteBatch(GraphicsDevice);

        // TODO: use this.Content to load your game content here
        _ragozineSprite = Content.Load<Texture2D>("Sprites/ragozineHead");
    }

    protected override void Update(GameTime gameTime)
    {
        if (GamePad.GetState(PlayerIndex.One).Buttons.Back == ButtonState.Pressed || Keyboard.GetState().IsKeyDown(Keys.Escape))
            Exit();


        if (Keyboard.GetState().IsKeyDown(Keys.Up)){
            _ragozinePos.Y -= 4;
        }else if(Keyboard.GetState().IsKeyDown(Keys.Down)){
            _ragozinePos.Y += 4;
        }

        if (Keyboard.GetState().IsKeyDown(Keys.Right)){
            _ragozinePos.X += 4;
        }else if(Keyboard.GetState().IsKeyDown(Keys.Left)){
            _ragozinePos.X -= 4;
        }

        // TODO: Add your update logic here

        base.Update(gameTime);
    }

    protected override void Draw(GameTime gameTime)
    {
        GraphicsDevice.Clear(Color.CornflowerBlue);

        // TODO: Add your drawing code here

        _spriteBatch.Begin();

        _spriteBatch.Draw(_ragozineSprite, _ragozinePos, Color.White);

        _spriteBatch.End();

        base.Draw(gameTime);
    }
}
