import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

            FileInputStream fin;
            FileOutputStream fout;

            fin=new FileInputStream("tiszta.txt");
            int c;
            ArrayList<Integer> input = new ArrayList<Integer>();
            ArrayList<Integer> output = new ArrayList<Integer>();
            Scanner in = new Scanner(System.in);
            System.out.println("Adja meg a kulcsot: ");
            String kulcs = in.nextLine();
            int kulcs_hossz = kulcs.length();

            while((c=fin.read())!=-1)
            {
                input.add(c);
            }
            fout = new FileOutputStream("titkos.txt");
            for(int i=0;i<input.size();i++)
            {
                output.add(input.get(i)^key.charAt(i%kulcs_hossz));
                fout.write(output.get(i));
            }

            for(int i=0;i<output.size();i++)
            {
                System.out.printf("%c",output.get(i));
            }

            fin.close();
            fout.close();

        }
}
