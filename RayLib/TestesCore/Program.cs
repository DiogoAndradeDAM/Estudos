using Raylib_cs;

namespace HelloWorld
{
    static class Program
    {
        public static void Main()
        {
            Vector2 ballPosition = new Vector2(100.0f, 100.0f);

            Raylib.InitWindow(800, 480, "Hello World");

            while (!Raylib.WindowShouldClose())
            {
                if (Raylib.IsKeyDown(KeyboardKey.KEY_LEFT)) { ballPosition.x -= 5; }
                else if (Raylib.IsKeyDown(KeyboardKey.KEY_RIGHT)) { ballPosition.x += 5; }


                Raylib.BeginDrawing();

                Raylib.ClearBackground(Color.WHITE);
                Raylib.DrawCircleV(ballPosition, 50, Color.RED);

                Raylib.EndDrawing();
            }

            Raylib.CloseWindow();
        }
    }
}