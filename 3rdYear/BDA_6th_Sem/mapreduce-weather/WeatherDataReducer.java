public class WeatherDataReducer extends Reducer<Text, DoubleWritable, Text, DoubleWritable> {
    private final DoubleWritable avgMaxTemp = new DoubleWritable();

    @Override
    protected void reduce(Text key, Iterable<DoubleWritable> values, Context context)
            throws IOException, InterruptedException {
        double sum = 0;
        int count = 0;
        for (DoubleWritable temp : values) {
            sum += temp.get();
            count++;
        }
        double average = sum / count;
        avgMaxTemp.set(average);
        context.write(key, avgMaxTemp);
    }
}