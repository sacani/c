import org.apache.commons.net.ftp.FTPClient;
import java.io.ByteArrayOutputStream;
public class Ftp{
  public FTPClient ftp;
  public Ftp(String file){
    ftp=new FTPClient();
    try{
      ftp.connect("82.223.240.14");
      ftp.login("pimOxford","YCu8RLbxxZ");
      System.out.println(ftp.getReplyCode());
      System.out.println(ftp.printWorkingDirectory());
      ftp.setFileType(ftp.BINARY_FILE_TYPE);
      ByteArrayOutputStream out=new ByteArrayOutputStream();
      //ftp.pasv();
      ftp.enterLocalPassiveMode();
      String[] list=ftp.listNames();
      for(String elemento: list)
        System.out.println(elemento);
      ftp.retrieveFile(file,out); 
      System.out.println(out); 
      ftp.disconnect();
    }catch(Exception e){
      System.out.println(e.getMessage());
    }
  }
  public static void main(String[] args){
    Ftp app=new Ftp(args[0]);
  }
}
