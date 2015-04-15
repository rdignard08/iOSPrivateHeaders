
@interface CIBurstFaceInfo : NSObject {

    int swFaceId;
    int swLastFrameSeen;
    int hwFaceId;
    int hwLastFrameSeen;
    {CGPoint="x"d"y"d} swCenter;
    {CGSize="width"d"height"d} swSize;
    {CGPoint="x"d"y"d} hwCenter;
    {CGSize="width"d"height"d} hwSize;
}
@property (atomic, assign, readwrite) NSNumber* swFaceId;
@property (atomic, assign, readwrite) NSNumber* swCenter;
@property (atomic, assign, readwrite) NSNumber* swSize;
@property (atomic, assign, readwrite) NSNumber* swLastFrameSeen;
@property (atomic, assign, readwrite) NSNumber* hwFaceId;
@property (atomic, assign, readwrite) NSNumber* hwCenter;
@property (atomic, assign, readwrite) NSNumber* hwSize;
@property (atomic, assign, readwrite) NSNumber* hwLastFrameSeen;

 - (id) init;
 - (void) setSwFaceId:(int)a ;
 - (void) setSwCenter:({CGPoint=dd})a ;
 - (void) setSwSize:({CGSize=dd})a ;
 - (void) setSwLastFrameSeen:(int)a ;
 - (void) setHwFaceId:(int)a ;
 - (void) setHwCenter:({CGPoint=dd})a ;
 - (void) setHwSize:({CGSize=dd})a ;
 - (void) setHwLastFrameSeen:(int)a ;
 - ({CGPoint=dd}) hwCenter;
 - ({CGSize=dd}) hwSize;
 - ({CGPoint=dd}) swCenter;
 - ({CGSize=dd}) swSize;
 - (int) hwFaceId;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) hwFaceRect;
 - (int) swFaceId;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) swFaceRect;
 - (float) overlapWithHwRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (float) overlapWithSwRect:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (int) swLastFrameSeen;
 - (int) hwLastFrameSeen;


@end
