

import java.io.*;

public class even_odd_site {
    public static void main(String[] args) throws IOException {
        BufferedWriter file = new BufferedWriter(new FileWriter("numbers.html"));
        //write the website title
        file.write("<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n");
        //create table of numbers with headers "Even numbers", and "Odd numbers"
        file.write("<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n");
        //for each number from 1 to 50, if it is even, add it to the even column
        //if it is odd add it to the odd column
        for (int i = 1; i <= 50; i++) {
            if (i % 2 == 0) {
                file.write("<tr><td>" + i + "</td><td></td></tr>\n");
            }
            else {
                file.write("<tr><td></td><td>" + i + "</td></tr>\n");
            }
        }
        //close table, body, and html
        file.write("</table>\n</body>\n</html>");
        file.close();
        BufferedReader reader = new BufferedReader(new FileReader("numbers.html"));
        String line;
        //print out the file
        while ((line = reader.readLine()) != null) {
            System.out.println(line);
        }
        reader.close();
    }
}
