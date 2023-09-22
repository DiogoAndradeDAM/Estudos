using System;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;

namespace Testes.Interface
{
	public interface IBehaviour
	{
		public bool IsDrawable
		{ 
			get;
		}
		public bool IsUpgradeable
		{ 
			get;
		}

		//public void Draw();
		public void Draw(SpriteBatch spriteBatch);
		public void Update(GameTime gameTime);

		//public void AddInListForDraw(DrawManager drawManager);
		//public void AddInListForUpdate(UpdateManager updateManager);
		//public void Destroy();
	}

}