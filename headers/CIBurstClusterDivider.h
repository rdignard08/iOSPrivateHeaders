
@interface CIBurstClusterDivider : NSObject {

    f dividerScore;
    i trueLocalMaximum;
    i leftImage;
    f actionAmount;
    f noiseThreshold;
    f highNoiseThreshold;
}
@property (atomic, assign, readwrite) NSNumber* dividerScore;
@property (atomic, assign, readwrite) NSNumber* trueLocalMaximum;
@property (atomic, assign, readwrite) NSNumber* leftImage;
@property (atomic, assign, readwrite) NSNumber* actionAmount;
@property (atomic, assign, readwrite) NSNumber* noiseThreshold;
@property (atomic, assign, readwrite) NSNumber* highNoiseThreshold;

 - (void) setDividerScore:(f)a;
 - (void) setLeftImage:(i)a;
 - (void) setActionAmount:(f)a;
 - (f) dividerScore;
 - (void) setNoiseThreshold:(f)a;
 - (void) setHighNoiseThreshold:(f)a;
 - (i) leftImage;
 - (f) noiseThreshold;
 - (f) highNoiseThreshold;
 - (void) setTrueLocalMaximum:(i)a;
 - (q) compareDividers:(id)a;
 - (q) compareIndices:(id)a;
 - (f) actionAmount;
 - (q) compareActionAmounts:(id)a;
 - (i) trueLocalMaximum;


@end
