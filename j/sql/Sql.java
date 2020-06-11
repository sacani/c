import java.sql.*;
public class Sql{
  public Sql(String query){
    try{
      Class.forName("oracle.jdbc.OracleDriver");
      ResultSet result=DriverManager.getConnection(
      	"jdbc:oracle:thin:"+
				System.getenv("JDBC")
      ).createStatement().executeQuery(query);
      ResultSetMetaData metadata=result.getMetaData();
      int numberOfColumns=metadata.getColumnCount();
      for(int i=1;i<=numberOfColumns;i++)
	      System.out.print(
          metadata.getColumnName(i)+';'
	      );
      System.out.println("");
      while(result.next())
	      for(int i=1;i<=numberOfColumns;i++)
          System.out.print(
	          result.getString(
							metadata.getColumnName(i)
						)+';'
          );	
			System.out.println("");
    }catch(Exception e){
      e.printStackTrace();
    }	
  }
  public static void main(String[]args){
    Sql app=new Sql(args[0]); 
  }
}
