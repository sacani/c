public class Args{
  public Args(String[] args){
    for(String s:args)
      System.out.println(s);
  }
  public static void main(String[] args){
    Args app=new Args(args);
  }
}
