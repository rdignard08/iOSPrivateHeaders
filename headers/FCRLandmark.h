
@interface FCRLandmark : NSObject {

    NSString* type;
    unsigned long long pointCount;
    ^{CGPoint=dd} points;
}
@property (atomic, assign, readonly) NSString* type;
@property (atomic, assign, readonly) NSNumber* pointCount;
@property (atomic, assign, readonly) NSNumber* points;
 + (id) landmarkWithType:(id)apointCount:(unsigned long long)bpoints:(^{CGPoint=dd})c;

 - (void) dealloc;
 - (id) type;
 - (id) initWithType:(id)apointCount:(unsigned long long)bpoints:(^{CGPoint=dd})c;
 - (unsigned long long) pointCount;
 - (^{CGPoint=dd}) points;


@end
