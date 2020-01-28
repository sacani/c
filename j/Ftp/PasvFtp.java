import org.apache.commons.net.ftp.FTPClient;
import java.io.ByteArrayOutputStream;
public class PasvFtp{
  public FTPClient ftp;
  public PasvFtp(){
    ftp=new FTPClient();
    try{
      ftp.connect("82.223.240.14");
      ftp.login("pimOxford","YCu8RLbxxZ");
      System.out.println(ftp.pasv());
      System.out.println(ftp.getReplyCode());
      ftp.disconnect();
    }catch(Exception e){
      System.out.println(e.getMessage());
    }
  }
  public static void main(String[] args){
    PasvFtp app=new PasvFtp();
  }
}
