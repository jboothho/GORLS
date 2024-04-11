//importing neccessary things to do date
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class datetime_convert {
    public static void main(String[] args) {
        //assigning data to a string object
        String dateStr = "2022-03-17 10:45:30";

        //creating a formatting object to format our date string
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");

        //parsing date string into a date object with the format that we specified
        LocalDateTime dateObj = LocalDateTime.parse(dateStr, formatter);

        //converting date object into formatted date in a string
        String formattedDate = dateObj.format(DateTimeFormatter.ofPattern("MM/dd/yyyy HH:mm:ss"));

        //printing out formatted date to user
        System.out.println(formattedDate);
    }
}
