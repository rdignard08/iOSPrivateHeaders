
@interface CIBurstFaceScoreEntry : NSObject {

    float maxScore;
    float minScore;
    float sumScores;
    float sumSqScores;
    int numScores;
}
@property (atomic, assign, readwrite) NSNumber* maxScore;
@property (atomic, assign, readwrite) NSNumber* minScore;
@property (atomic, assign, readwrite) NSNumber* numScores;

 - (float) computeAverage;
 - (id) initWithScore:(float)a;
 - (void) addScore:(float)a;
 - (float) computeStandardDeviation;
 - (float) maxScore;
 - (void) setMaxScore:(float)a;
 - (float) minScore;
 - (void) setMinScore:(float)a;
 - (int) numScores;
 - (void) setNumScores:(int)a;


@end
