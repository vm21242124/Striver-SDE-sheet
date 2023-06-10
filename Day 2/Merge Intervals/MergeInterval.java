import java.util.* ;
import java.io.*; 

class Interval {
    int start; int finish;

    Interval(int start, int finish) {
        this.start = start;
        this.finish = finish;
    }
}

public class MergeInterval {
    public static List<Interval> mergeIntervals(Interval[] intervals) {
        // write your code here.
        Arrays.sort(intervals, new Comparator<Interval>() {
            @Override
            public int compare(Interval interval1, Interval interval2) {
                return interval1.start - interval2.start;
            }
        });

        ArrayList<Interval> merged = new ArrayList();
        for (Interval interval : intervals) {
            if(merged.size() == 0) {
                merged.add(interval);
                continue;
            }

            if(isOverlapping(interval, merged.get(merged.size()-1))) {
                merge(interval, merged);
                continue;
            }

            merged.add(interval);
        }
        return merged;
    }

    static boolean isOverlapping(Interval current, Interval combined) {
        if(current.start <= combined.finish) {
            return true;
        }
        return false;
    }

    static void merge(Interval interval, ArrayList<Interval> merged) {
        Interval bigInterval = merged.get(merged.size()-1);
        Interval newInterval = new Interval(bigInterval.start, Math.max(interval.finish, bigInterval.finish));
        merged.set(merged.size()-1, newInterval);
    }
}
