#region Includes
using System;
using System.Collections.Generic;
using System.Linq;
using System.Xml.Linq;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Audio;
using Microsoft.Xna.Framework.Content;

using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Media;
#endregion

namespace TopDownShooter
{
    public class Basic2d
    {
        public float rot;
        public Vector2 pos, dimension;
        public Texture2D myModel;

        public Basic2d(string PATH, Vector2 pos, Vector2 dims)
        {
            pos = pos;
            dimension = dims;
            myModel = Globals.content.Load<Texture2D>(PATH);
        }

        public virtual void Update()
        {

        }

        public virtual void Draw(Vector2 offset)
        {
            if(myModel != null){
                Globals.spriteBatch.Draw(myModel, new Rectangle((int)pos.X + (int)offset.X, (int)pos.Y + (int)offset.Y, (int)dimension.X, (int)dimension.Y), null, Color.White, 0.0f, new Vector2(myModel.Bounds.Width/2, myModel.Bounds.Height/2), SpriteEffects.None, 0);
            }
        }

        public virtual void Draw(Vector2 offset, Vector2 origin)
        {
            if(myModel != null){
                Globals.spriteBatch.Draw(myModel, new Rectangle((int)pos.X + (int)offset.X, (int)pos.Y + (int)offset.Y, (int)dimension.X, (int)dimension.Y), null, Color.White, 0.0f, new Vector2(origin.X, origin.Y), SpriteEffects.None, 0);
            }
        }
    }
}