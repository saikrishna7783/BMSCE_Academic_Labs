public class WeatherDataMapper extends Mapper<LongWritable, Text, Text, DoubleWritable> {
    private final Text yearMonth = new Text();
    private final DoubleWritable temperature = new DoubleWritable();

    @Override
    protected void map(LongWritable key, Text value, Context context) throws IOException, InterruptedException {
        // Parse the input line (assuming CSV format: year, month, max_temperature)
        String[] fields = value.toString().split(",");
        if (fields.length >= 3) {
            String year = fields[0];
            String month = fields[1];
            double maxTemp = Double.parseDouble(fields[2]);

            // Emit (year-month, max_temperature)
            yearMonth.set(year + "-" + month);
            temperature.set(maxTemp);
            context.write(yearMonth, temperature);
        }
    }
}