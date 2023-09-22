using System;

using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Graphics;

namespace Testes.tools
{
    public class Sprite
    {
        private Texture2D _texture;
        private Vector2 _scale;
        private Vector2 _position;
        private Vector2 _size;
        private SpriteEffects _spriteEffect;


        public Texture2D Texture
        {
            get => _texture;
            set => _texture = value;
        }
        public Vector2 Scale
        {
            get => _scale;
            set => _scale = value;
        }
        public Vector2 Position
        {
            get => _position;
            set => _position = value;
        }
        public Vector2 Size
        {
            get => _size;
            set => _size = value;
        }
        public SpriteEffects SpriteEffect
        {
            get => _spriteEffect;
            set => _spriteEffect = value;
        }


        public Sprite(Texture2D texture)
        {
            this._texture = texture;
            this.Position = Vector2.Zero;
            this.Size = new Vector2(this._texture.Width, this._texture.Height);
            this.Scale = Vector2.One;
            this.SpriteEffect = SpriteEffects.None;
        }

    }
}