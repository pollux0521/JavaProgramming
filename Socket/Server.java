import java.net.*;
import java.io.*;

public class EchoServer{
	public static void main(String[] args){
		try{
			ServerSocket server = new ServerSocket(10001);
			System.out.println("Waiting Connect...");
			Socket sock = server.accept();
			
			InetAddress inetaddr = sock.getInetAddress();
			System.out.println("Connect from " + inetaddr.getHostAddress());
		
			OutputStream out = sock.getOutputStream();
			InputStream in = sock.getInputStream();
			
			
			PrintWriter pw = new PrintWriter(new OutputStreamWriter(out));
			BufferedReader br = new BufferedReader(new InputStreamReader(in));
			String line = null;

			Cmd cmd = new Cmd();
			while((line = br.readLine()) != null){

				String result = cmd.execCmd(command);
				
				result = result.replaceAll("\n", "|||||");
				
				pw.println(result);
				pw.flush();
				
				
			}
			pw.close();
			br.close();
			sock.close();
		} catch(Exception e){
			System.out.println(e);
		}
	}
}