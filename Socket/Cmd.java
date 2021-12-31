import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;

public class Cmd {

	private BufferedReader br;
	private String command, line;
	private InputStream result;

	public Cmd() { }

	public String execCmd(String Cmd){
		String cmdResult;
		try{
			// 명령어 입력 후 실행
			command = "cmd.exe /c " + Cmd;
			result = Runtime.getRuntime().exec(command).getInputStream();
			
			// 명령어 출력
			br = new BufferedReader(new InputStreamReader(result));
			while((line = br.readLine()) != null){
				cmdResult += line;
			}
			return cmdResult;

		}catch(Exception e){
			e.printStackTrace();
		}

	}
	public static void main(String[] args){
		Cmd cmd = new Cmd();
		cmd.execCmd();
    }
}