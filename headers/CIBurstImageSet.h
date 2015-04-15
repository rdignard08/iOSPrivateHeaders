
@interface CIBurstImageSet : NSObject {

    CIBurstImageSetInternal* _priv;
}
 + (id) defaultVersionString;
 + (id) burstImageSet;
 + (id) burstImageSetWithOptions:(id)a;

 - (id) initWithOptions:(id)a;
 - (void) dealloc;
 - (id) init;
 - (id) burstId;
 - (id) bestImageIdentifiers;
 - (id) imageClusterForIdentifier:(id)a;
 - (BOOL) isPortrait;
 - (BOOL) isAction;
 - (id) allImageIdentifiers;
 - (double) secondsSinceStart;
 - (id) statsForImageWithIdentifier:(id)a;
 - (id) coverImageIdentifier;
 - (unsigned long long) imageClusterCount;
 - (id) imageClusterForIndex:(unsigned long long)a;
 - (void) setLoggingListener:(^v)awithUserInfo:(^v)b;


@end
