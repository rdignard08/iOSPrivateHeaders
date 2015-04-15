
@protocol NSSecureCoding;
@interface _UIDocumentPickerNSURLWrapper : NSObject <NSSecureCoding> {

    BOOL _createSandbox;
    NSURL* _url;
    NSData* _scope;
}
@property (nonatomic, copy, readwrite) NSURL* url;
@property (nonatomic, assign, readwrite) NSNumber* createSandbox;
@property (nonatomic, copy, readwrite) NSData* scope;
 + (BOOL) supportsSecureCoding;
 + (id) wrapperWithURL:(id)areadonly:(BOOL)b;
 + (id) wrapperWithURL:(id)acreateSandboxIfNoneAttached:(BOOL)b;
 + (void) assembleURL:(id)asandbox:(id)bphysicalURL:(id)cphysicalSandbox:(id)d;
 + (id) wrapperWithURL:(id)a;

 - (void) dealloc;
 - (void) setUrl:(id)a;
 - (void) setCreateSandbox:(BOOL)a;
 - (void) setScope:(id)a;
 - (id) scope;
 - (BOOL) createSandbox;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) url;


@end
