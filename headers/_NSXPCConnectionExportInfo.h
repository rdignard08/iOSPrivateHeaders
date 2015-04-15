
@interface _NSXPCConnectionExportInfo : NSObject {

    id _exportedObject;
    @"NSXPCInterface" _exportedInterface;
    q _exportCount;
}
@property (atomic, retain, readwrite) NSNumber* exportedObject;
@property (atomic, retain, readwrite) NSXPCInterface* exportedInterface;
@property (atomic, assign, readwrite) NSNumber* exportCount;

 - (id) exportedObject;
 - (id) exportedInterface;
 - (q) exportCount;
 - (void) setExportCount:(q)a;
 - (id) description;
 - (void) dealloc;
 - (id) init;
 - (void) setExportedInterface:(id)a;
 - (void) setExportedObject:(id)a;


@end
