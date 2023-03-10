using System;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;

namespace Testes;

public class Game1 : Game
{
    private GraphicsDeviceManager _graphics;
    private SpriteBatch _spriteBatch;

    public Texture2D textura;
    public Vector2 playerPosition;

    public Game1()
    {
        _graphics = new GraphicsDeviceManager(this);
        Content.RootDirectory = "Content";
        IsMouseVisible = true;
    }

    protected override void Initialize()
    {
        // TODO: Add your initialization logic here

        base.Initialize();

        playerPosition = new Vector2(_graphics.PreferredBackBufferWidth/2, _graphics.PreferredBackBufferHeight/2);
    }

    protected override void LoadContent()
    {
        _spriteBatch = new SpriteBatch(GraphicsDevice);

        // TODO: use this.Content to load your game content here

        textura = Content.Load<Texture2D>("Player");
    }

    protected override void Update(GameTime gameTime)
    {
        if (GamePad.GetState(PlayerIndex.One).Buttons.Back == ButtonState.Pressed || Keyboard.GetState().IsKeyDown(Keys.Escape))
            Exit();

        // TODO: Add your update logic here
        if (Keyboard.GetState().IsKeyDown(Keys.A)){
            playerPosition.X -= 10;
        } else if (Keyboard.GetState().IsKeyDown(Keys.D)){
            playerPosition.X += 10;
        }
        if (Keyboard.GetState().IsKeyDown(Keys.W)){
            playerPosition.Y -= 10;
        } else if (Keyboard.GetState().IsKeyDown(Keys.S)){
            playerPosition.Y += 10;
        }


        base.Update(gameTime);
    }

    protected override void Draw(GameTime gameTime)
    {
        GraphicsDevice.Clear(Color.CornflowerBlue);

        // TODO: Add your drawing code here
        _spriteBatch.Begin();

        _spriteBatch.Draw(textura, playerPosition, null, Color.White, 0f, Vector2.Zero, 2f, SpriteEffects.None, 0f);

        _spriteBatch.End();

        base.Draw(gameTime);
    }
}
