using Microsoft.Xna.Framework.Media;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Content;
using Microsoft.Xna.Framework;

namespace Testes
{
    public class Hero
    {
        public Vector2 pos, dim;

        public Texture2D model;

        public static ContentManager content;
        public static SpriteBatch spriteBatch;

        //Constructors
        public Hero(string path, Vector2 position, Vector2 dimesion)
        {
            this.pos = position;
            this.dim = dimesion;
            this.model = content.Load<Texture2D>(path);
        }


        public virtual void Update()
        {

        }

        public virtual void Draw()
        {
            if(model != null){
                spriteBatch.Draw(model, pos, null, Color.White);
            }
        }
    }
}