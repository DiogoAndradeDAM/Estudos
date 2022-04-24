using System;

namespace Events
{
  class Program
  {
    static void Main()
    {
      var room = new Room(3);
      room.RoomSoldOutEvent += OnRoomSoldOut;//Delegando o evento do método na classe Program, para o da classe Room
      room.ReserveSeat();
      room.ReserveSeat();
      room.ReserveSeat();
      room.ReserveSeat();
    }

    static void OnRoomSoldOut(){
      Console.WriteLine("Sala lotada!");
    }
  }

  public class Room
  {
    public Room(int seats)
    {
      Seats = seats;
      SeatsInUse = 0;
    }

    public int Seats {get; set;}

    public int SeatsInUse = 0 ;

    public void ReserveSeat(){
      SeatsInUse++;
      if(SeatsInUse >= Seats){
        //evento fechado
        OnRoomSoldOut(EventArgs.Empty);
      } else {
        Console.WriteLine("Assento reservado");
      }
    }
    public event EventHandler RoomSoldOut;//Evento

    protected virtual void OnRoomSoldOut(EventArgs e){//manioulador do evento. Começa com On
      EventHandler handler = RoomSoldOutEvent;//Chamar o evento
      handler?/*? caso venha nulo*/.Invoke(this, e);
    } 
  }

}
