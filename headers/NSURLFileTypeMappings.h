
@interface NSURLFileTypeMappings : NSObject {

    NSURLFileTypeMappingsInternal* _internal;
}
 + (id) sharedMappings;

 - (id) _init;
 - (id) MIMETypeForExtension:(id)a;
 - (id) _UTIMIMETypeForExtension:(id)a;
 - (id) _UTIextensionForMIMEType:(id)a;
 - (id) preferredExtensionForMIMEType:(id)a;
 - (id) extensionsForMIMEType:(id)a;


@end
