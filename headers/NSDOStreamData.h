
@interface NSDOStreamData : NSMutableData {

    id refObject;
    {?="data"@"datap"*"limitp"*"startp"*"callback"@"datapVM"B} stream;
}

 - (void) dealloc;
 - (void) finalize;
 - (r^v) bytes;
 - (^v) mutableBytes;
 - (unsigned long long) length;
 - (id) init;


@end
