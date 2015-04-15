
@interface CIBurstImageFaceAnalysisContext : NSObject {

    NSMutableDictionary* curConfig;
    NSMutableDictionary* faceIdMapping;
    NSMutableDictionary* renameMapping;
    int faceIdCounter;
    NSMutableArray* faceInfoArray;
    int numFramesSinceFullFaceCore;
    int numFramesNoFaces;
    FCRFaceDetector* faceDetector;
    NSMutableArray* faceTimestampArray;
    double latestImageTimestamp;
    int lastFaceIndex;
    BOOL forceFaceDetectionEnable;
    int _version;
    double timeBlinkDetectionDone;
    double timeFaceDetectionDone;
    double latestFaceTimestamp;
}
@property (atomic, assign, readwrite) NSNumber* timeFaceDetectionDone;
@property (atomic, assign, readwrite) NSNumber* timeBlinkDetectionDone;
@property (atomic, assign, readwrite) NSNumber* forceFaceDetectionEnable;
@property (atomic, assign, readwrite) NSNumber* latestFaceTimestamp;
@property (atomic, assign, readwrite) NSNumber* version;

 - (void) setVersion:(int)a ;
 - (void) dealloc;
 - (int) version;
 - (id) initWithVersion:(id)a ;
 - (void) setForceFaceDetectionEnable:(BOOL)a ;
 - (double) latestFaceTimestamp;
 - (void) addFacesToImageStat:(id)a imageSize:({CGSize=dd})b ;
 - (int) findFacesInImage:(id)a imageStat:(id)b ;
 - (void) setTimeFaceDetectionDone:(double)a ;
 - (void) setTimeBlinkDetectionDone:(double)a ;
 - (double) timeFaceDetectionDone;
 - (double) timeBlinkDetectionDone;
 - (void) calculateFaceFocusInImage:(id)a imageStat:(id)b ;
 - (void) adjustFaceIdsForImageStat:(id)a ;
 - (void) dumpFaceInfoArray;
 - (void) extractFacesFromMetadata:(id)a ;
 - (void) calcFaceScores:(id)a ;
 - (BOOL) forceFaceDetectionEnable;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) padRoiRect:({CGRect={CGPoint=dd}{CGSize=dd}})a paddingX:(float)b paddingY:(float)c ;
 - (void) setupFaceDetector;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) calculateFaceCoreROI:(id)a imageStat:(id)b needFaceCore:(^B)c ;
 - (BOOL) isSmallFace:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) addFaceToArray:(id)a ;
 - (void) setLatestFaceTimestamp:(double)a ;
 - (id) processSmallFaces:(id)a imageStat:(id)b faces:(id)c extractOptions:(id)d ;


@end
