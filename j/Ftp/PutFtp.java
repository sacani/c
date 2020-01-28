import org.apache.commons.net.ftp.FTPClient;
import java.io.ByteArrayInputStream;
public class PutFtp{
  public FTPClient ftp;
  public PutFtp(){
    ftp=new FTPClient();
    try{
      ftp.connect("82.223.240.14");
      ftp.login("pimOxford","YCu8RLbxxZ");
      System.out.println(ftp.getReplyCode());
      //System.out.println(ftp.printWorkingDirectory());
      ftp.setFileType(ftp.BINARY_FILE_TYPE);
      ByteArrayInputStream in=new ByteArrayInputStream("Hola Caracola".getBytes());
      //ftp.pasv();
      ftp.enterLocalPassiveMode();
      ftp.storeFile("prueba-put",in);
      ftp.disconnect();
    }catch(Exception e){
      System.out.println(e.getMessage());
    }
  }
  public static void main(String[] args){
    PutFtp app=new PutFtp();
  }
}
