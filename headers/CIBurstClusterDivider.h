
@interface CIBurstClusterDivider : NSObject {

    float dividerScore;
    int trueLocalMaximum;
    int leftImage;
    float actionAmount;
    float noiseThreshold;
    float highNoiseThreshold;
}
@property (atomic, assign, readwrite) NSNumber* dividerScore;
@property (atomic, assign, readwrite) NSNumber* trueLocalMaximum;
@property (atomic, assign, readwrite) NSNumber* leftImage;
@property (atomic, assign, readwrite) NSNumber* actionAmount;
@property (atomic, assign, readwrite) NSNumber* noiseThreshold;
@property (atomic, assign, readwrite) NSNumber* highNoiseThreshold;

 - (void) setDividerScore:(float)a ;
 - (void) setLeftImage:(int)a ;
 - (void) setActionAmount:(float)a ;
 - (float) dividerScore;
 - (void) setNoiseThreshold:(float)a ;
 - (void) setHighNoiseThreshold:(float)a ;
 - (int) leftImage;
 - (float) noiseThreshold;
 - (float) highNoiseThreshold;
 - (void) setTrueLocalMaximum:(int)a ;
 - (long long) compareDividers:(id)a ;
 - (long long) compareIndices:(id)a ;
 - (float) actionAmount;
 - (long long) compareActionAmounts:(id)a ;
 - (int) trueLocalMaximum;


@end
