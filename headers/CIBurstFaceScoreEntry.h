
@interface CIBurstFaceScoreEntry : NSObject {

    f maxScore;
    f minScore;
    f sumScores;
    f sumSqScores;
    i numScores;
}
@property (atomic, assign, readwrite) NSNumber* maxScore;
@property (atomic, assign, readwrite) NSNumber* minScore;
@property (atomic, assign, readwrite) NSNumber* numScores;

 - (f) computeAverage;
 - (id) initWithScore:(f)a;
 - (void) addScore:(f)a;
 - (f) computeStandardDeviation;
 - (f) maxScore;
 - (void) setMaxScore:(f)a;
 - (f) minScore;
 - (void) setMinScore:(f)a;
 - (i) numScores;
 - (void) setNumScores:(i)a;


@end
