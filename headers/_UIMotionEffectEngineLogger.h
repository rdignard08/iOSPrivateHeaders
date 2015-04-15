
@interface _UIMotionEffectEngineLogger : NSObject {

    [8q] _motionLevelSamples;
    q _sampleCount;
    q _updateFreqency;
    d _lastUpdateTimeStamp;
}

 - (id) initWithFastUpdateInterval:(d)aslowUpdateInterval:(d)b;
 - (d) lastRecordedTimestamp;
 - (void) recordMotionMagnitude:(d)aatTimestamp:(d)b;
 - (void) _dumpToAggregated;


@end
