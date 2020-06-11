public class Env{
  public Env(String variable){
    System.out.println(variable);
    System.out.println(
      System.getenv(variable)
    ); 
  }
  public static void main(String[]args){
    Env app=new Env(args[0]);
  }
}
