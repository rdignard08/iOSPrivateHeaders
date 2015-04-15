
@interface CIBurstFaceInfo : NSObject {

    i swFaceId;
    i swLastFrameSeen;
    i hwFaceId;
    i hwLastFrameSeen;
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
 - (void) setSwFaceId:(i)a;
 - (void) setSwCenter:({CGPoint=dd})a;
 - (void) setSwSize:({CGSize=dd})a;
 - (void) setSwLastFrameSeen:(i)a;
 - (void) setHwFaceId:(i)a;
 - (void) setHwCenter:({CGPoint=dd})a;
 - (void) setHwSize:({CGSize=dd})a;
 - (void) setHwLastFrameSeen:(i)a;
 - ({CGPoint=dd}) hwCenter;
 - ({CGSize=dd}) hwSize;
 - ({CGPoint=dd}) swCenter;
 - ({CGSize=dd}) swSize;
 - (i) hwFaceId;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) hwFaceRect;
 - (i) swFaceId;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) swFaceRect;
 - (f) overlapWithHwRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (f) overlapWithSwRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (i) swLastFrameSeen;
 - (i) hwLastFrameSeen;


@end
