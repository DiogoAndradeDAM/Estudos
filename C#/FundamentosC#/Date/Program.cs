using System;
using System.Globalization; //CultureInfo

namespace Date
{
  class Program
  {
    static void Main(string[] args)
    {
      DateTime data1 = DateTime.Now;
      DateTime data2 = new DateTime(2020, 4, 10, 22, 50, 33);
      Console.WriteLine(data1.DayOfWeek);
      Console.WriteLine(data1.Year+"\n");

      Console.WriteLine(DateTime.DaysInMonth(2020,2)); //Analisa quantos dias tem em 1 mês

      var UTCDate = DateTime.UtcNow; //Global
      Console.WriteLine(UTCDate);
      Console.WriteLine(UTCDate.ToLocalTime());

      //Atribuição de valores
      Console.WriteLine(data1.AddDays(12));
      Console.WriteLine(data1.AddHours(4)+"\n");

      /*Enumerador DayOfWeek
      Console.WriteLine(DayOfWeek.Saturday);
      */

      //Comparação
      //DateTime.Now em lugares diferentes tem milisegundos de diferença, Utilize o atributo Date para comparação

      //CultureInfo
      /*
      var pt = new CultureInfo("pt-PT");
      var br = new CultureInfo("pt-BR");
      var en = new CultureInfo("en-US");
      var atual = CultureInfo.CurrentCulture; //Pega a cultura da máquina atual
      Console.WriteLine(DateTime.Now.ToString("D", en));
      */
      //TimeZone
      var timeZoneAustralia = TimeZoneInfo.FindSystemTimeZoneById("Pacific/Auckland");
      Console.WriteLine(timeZoneAustralia);

      var horaAustralia = TimeZoneInfo.ConvertTimeFromUtc(UTCDate, timeZoneAustralia); //De UTC para TimeZone da Australia
      /*var horaAustralia = TimeZoneInfo.ConvertTimeToUtc(UTCDate, timeZoneAustralia);//Do TimeZone da Australia para UTC*/
      Console.WriteLine(horaAustralia+"\n");

      /* Todas as TimeZOnes
      var timeZones = TimeZoneInfo.GetSystemTimeZones();
      foreach(var timeZone in timeZones){
        Console.WriteLine(timeZone.Id);
        Console.WriteLine(timeZone);
        Console.WriteLine(TimeZoneInfo.ConvertTimeFromUtc(UTCDate, timeZone));
        Console.WriteLine("__________");
      }
      */

      /*
      //TimeSpan São formas precisas de ter uma hora; usados principalmente em cálculos de hora| Bem parecido com DateTime
      var timeSpan = new TimeSpan();
      Console.WriteLine(timeSpan);
      var timeSpanNanosegundos = new TimeSpan(1);
      Console.WriteLine(timeSpanNanosegundos);
      var timeSpanHoraMinutoSegundo = new TimeSpan(5, 12, 8);
      Console.WriteLine(timeSpanHoraMinutoSegundo);
      Console.WriteLine(timeSpanNanosegundos.Add(new TimeSpan(1, 12, 5, 8)));
      */

      /*//Formatações de datas
      //string data3 = DateTime.Now.ToString("d");
      string data3 = String.Format("{0:yyyy/MM/dd | hh:mm:ss}", data1);//f: fração de segundos; z: timezone
      Console.WriteLine(data3+"\n");
      string data4 = String.Format("{0:d}", data1);
      /*Outros tipos de formatação 
      t: data short; 
      T: data longa; 
      d: formatação padrão brasileira; 
      D: formatação padrão maior; 
      f: data e hora; 
      r, R: padrão UFC-123; 
      s: sortible DateTime, padrão do JSON; 
      u: universal DateTime
      
      Console.WriteLine(data4+"\n");
      */


    }
  }
}

