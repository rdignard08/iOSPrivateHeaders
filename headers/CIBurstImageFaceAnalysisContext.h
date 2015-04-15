
@interface CIBurstImageFaceAnalysisContext : NSObject {

    @"NSMutableDictionary" curConfig;
    @"NSMutableDictionary" faceIdMapping;
    @"NSMutableDictionary" renameMapping;
    i faceIdCounter;
    @"NSMutableArray" faceInfoArray;
    i numFramesSinceFullFaceCore;
    i numFramesNoFaces;
    @"FCRFaceDetector" faceDetector;
    @"NSMutableArray" faceTimestampArray;
    d latestImageTimestamp;
    i lastFaceIndex;
    BOOL forceFaceDetectionEnable;
    i _version;
    d timeBlinkDetectionDone;
    d timeFaceDetectionDone;
    d latestFaceTimestamp;
}
@property (atomic, assign, readwrite) NSNumber* timeFaceDetectionDone;
@property (atomic, assign, readwrite) NSNumber* timeBlinkDetectionDone;
@property (atomic, assign, readwrite) NSNumber* forceFaceDetectionEnable;
@property (atomic, assign, readwrite) NSNumber* latestFaceTimestamp;
@property (atomic, assign, readwrite) NSNumber* version;

 - (void) setVersion:(i)a;
 - (void) dealloc;
 - (i) version;
 - (id) initWithVersion:(id)a;
 - (void) setForceFaceDetectionEnable:(BOOL)a;
 - (d) latestFaceTimestamp;
 - (void) addFacesToImageStat:(id)aimageSize:({CGSize=dd})b;
 - (i) findFacesInImage:(id)aimageStat:(id)b;
 - (void) setTimeFaceDetectionDone:(d)a;
 - (void) setTimeBlinkDetectionDone:(d)a;
 - (d) timeFaceDetectionDone;
 - (d) timeBlinkDetectionDone;
 - (void) calculateFaceFocusInImage:(id)aimageStat:(id)b;
 - (void) adjustFaceIdsForImageStat:(id)a;
 - (void) dumpFaceInfoArray;
 - (void) extractFacesFromMetadata:(id)a;
 - (void) calcFaceScores:(id)a;
 - (BOOL) forceFaceDetectionEnable;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) padRoiRect:({CGRect={CGPoint=dd}{CGSize=dd}})apaddingX:(f)bpaddingY:(f)c;
 - (void) setupFaceDetector;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) calculateFaceCoreROI:(id)aimageStat:(id)bneedFaceCore:(^B)c;
 - (BOOL) isSmallFace:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) addFaceToArray:(id)a;
 - (void) setLatestFaceTimestamp:(d)a;
 - (id) processSmallFaces:(id)aimageStat:(id)bfaces:(id)cextractOptions:(id)d;


@end
