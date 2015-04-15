
@interface CIBurstImageSet : NSObject {

    @"CIBurstImageSetInternal" _priv;
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
 - (d) secondsSinceStart;
 - (id) statsForImageWithIdentifier:(id)a;
 - (id) coverImageIdentifier;
 - (Q) imageClusterCount;
 - (id) imageClusterForIndex:(Q)a;
 - (void) setLoggingListener:(^v)awithUserInfo:(^v)b;


@end
