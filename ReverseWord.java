import java.io.*;

public class ReverseWord {
	public static void main(String[] args) {
		
		File file = new File("A-small-practice.in");
		File outfile = new File("A-small-practice.out");
		
		try {
			BufferedReader br = new BufferedReader(new FileReader(file));
			BufferedWriter bw = new BufferedWriter(new FileWriter(outfile));
			
			int testCases = Integer.parseInt(br.readLine());
			
			String rev[];
			
			for(int i = 1; i <= testCases; i++){
				String line = br.readLine();
				rev = line.split(" ");
				bw.write("Case #" + i + ": ");
				for(int j = rev.length - 1; j >= 0; j--){
					bw.write(rev[j]);
					bw.write(" ");
				}
				bw.write("\n");	
			} 
			catch(FileNotFoundException e) {
				e.ptintStackTrace();
			} 
			catch (IOException e) {
				e.ptintStackTrace();
			}
			bw.close();
			br.close();
		}
	
	}
}
