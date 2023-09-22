using System;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Graphics;

using Testes.Interface;

namespace Testes.tools
{
    public class Component2D : IBehaviour
    {
        protected bool _isDrawable;
        protected bool _isUpgradeable;

        protected Sprite _sprite;
        protected float _rotate;
        protected Vector2 _size;
        protected Vector2 _position;
        protected Vector2 _origin;
        protected Vector2 _offset;
        protected Color _color;
        protected float _depth;
        protected Vector2 _linearVelocity;
        protected float _linearRotate;

        public float Rotate 
        {
            get => _rotate;
            set {
                if(value > 360.0f){ _rotate = 360.0f; }
                else if(value < 0.0f){ _rotate = 0.0f; }
                else {_rotate = value;}
            }
        }
        public Vector2 Size
        {
            get => this._size;
            set => this._size = value;
        }
        public Vector2 Origin
        {
            get => _origin;
            set => _origin = value;
        }

        public Color Color
        {
            get => _color;
            set => _color = value;
        }
        public Vector2 Position
        {
            get => this._position;
            set => this._position = value;
        }

        public Vector2 Offset
        {
            get => _offset;
            set => _offset = value;
        }

        public float Depth
        {
            get => this._depth;
            set => this._depth = value;
        }

        public Vector2 LinearVelocity
        {
            get => this._linearVelocity;
            set => this._linearVelocity = value;
        }

        public float LinearRotate
        {
            get => this._linearRotate;
            set => this._linearRotate = value;
        }

        public bool IsDrawable
		{ 
			get => this._isDrawable;
		}
		public bool IsUpgradeable
		{ 
			get => this._isUpgradeable;
		}

        public Component2D(Texture2D texture)
        {
            this._sprite = new Sprite(texture);
            this._position = Vector2.Zero;
            this.Size = new Vector2(this._sprite.Size.X, this._sprite.Size.Y);
            this._offset = Vector2.Zero;
            this._color = Color.White;
            this._origin = Vector2.Zero;
            this.Rotate = 0.0f;
            this._linearVelocity = Vector2.Zero;
            this._linearRotate = 0.0f;
        }

        public Component2D(Texture2D texture, Vector2 position)
        {
            this._sprite = new Sprite(texture);
            this._position = position;
            this.Size = new Vector2(this._sprite.Size.X, this._sprite.Size.Y);
            this._offset = Vector2.Zero;
            this._color = Color.White;
            this._origin = Vector2.Zero;
            this.Rotate = 0.0f;
            this._linearVelocity = Vector2.Zero;
            this._linearRotate = 0.0f;
        }
        public Component2D(Texture2D texture, Vector2 position, Vector2 size)
        {
            this._sprite = new Sprite(texture);
            this._position = position;
            this.Size = size;
            this._offset = Vector2.Zero;
            this._color = Color.White;
            this._origin = Vector2.Zero;
            this.Rotate = 0.0f;
            this._linearVelocity = Vector2.Zero;
            this._linearRotate = 0.0f;
        }

        public Component2D(Texture2D texture, Vector2 position, Vector2 size, Vector2 offset)
        {
            this._sprite = new Sprite(texture);
            this._position = position;
            this.Size = size;
            this._offset = offset;
            this._color = Color.White;
            this._origin = Vector2.Zero;
            this.Rotate = 0.0f;
            this._linearVelocity = Vector2.Zero;
            this._linearRotate = 0.0f;
        }

		/*public void Draw()
        {
            Globals
        }*/
		public void Draw(SpriteBatch spriteBatch)
        {
            if(this._sprite.Texture != null){
            spriteBatch.Draw(this._sprite.Texture, new Rectangle((int)this._position.X, (int)this._position.Y, (int)this._size.X, (int)this._size.Y),
            new Rectangle((int)this._sprite.Position.X, (int)this._sprite.Position.Y, (int)this._sprite.Size.X, (int)this._sprite.Size.Y), this._color, this._rotate, this._origin,
            this._sprite.SpriteEffect, this._depth);
            }
        }
		public void Update(GameTime gameTime)
        {
            if(Keyboard.GetState().IsKeyDown(Keys.D)){
                this._position += new Vector2(this._linearVelocity.X * (float)gameTime.ElapsedGameTime.TotalSeconds, 0);
            }

            this._rotate += this._linearRotate * (float)gameTime.ElapsedGameTime.TotalSeconds;
        }

		//public void AddInListForDraw(DrawManager drawManager);
		//public void AddInListForUpdate(UpdateManager updateManager);
		//public void Destroy();


        public void SetOriginCenter()
        {
            this.Origin = new Vector2(this.Size.X/2, this.Size.Y/2);
        }

        public void SetOriginZero()
        {
            this.Origin = Vector2.Zero;
        }
    }
}