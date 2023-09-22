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
    public class World
    {

        public Hero hero;
        public World()
        {
            hero = new Hero("2d/hero", new Vector2(300,300), new Vector2(50, 50));
        }

        public virtual void Update()
        {
            hero.Update();
        }

        public virtual void Draw(Vector2 offset)
        {
            hero.Draw(offset);
        }
    }
}