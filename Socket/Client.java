import java.net.*;
import java.io.*;

public class Client{
	public static void main(String[] args){
		try{
			Socket sock = new Socket("203.234.19.99", 10001);
			BufferedReader keyboard = new BufferedReader(new InputStreamReader(System.in));
			
		
			OutputStream out = sock.getOutputStream();
			InputStream in = sock.getInputStream();

			PrintWriter pw = new PrintWriter(new OutputStreamWriter(out));
			
			BufferedReader br = new BufferedReader(new InputStreamReader(in));
			
			String line = null;
			
			while((line = keyboard.readLine()) != null){
				if(line.equals("quit")) break;
				System.out.println(line);
				
				pw.println(line);
				pw.flush();
				
				String echo = br.readLine();
				echo = echo.replace("|||||","\n");
				System.out.println("receive to server: " + echo);

			}
			pw.close();
			br.close();
			sock.close();
		}catch(Exception e){
			System.out.println(e);
		}
	}
}
		