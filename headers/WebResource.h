
@protocol NSCoding, NSCopying;
@interface WebResource : NSObject <NSCoding, NSCopying> {

    WebResourcePrivate _private;
}
@property (nonatomic, copy, readonly) NSData* data;
@property (nonatomic, assign, readonly) NSURL* URL;
@property (nonatomic, copy, readonly) NSString* MIMEType;
@property (nonatomic, copy, readonly) NSString* textEncodingName;
@property (nonatomic, copy, readonly) NSString* frameName;
 + (id) bundleForClass;

 - (id) MIMEType;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) data;
 - (id) init;
 - (id) URL;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithData:(id)aURL:(id)bMIMEType:(id)ctextEncodingName:(id)dframeName:(id)e;
 - (id) frameName;
 - (^{ArchiveResource=^^?I{URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{ResourceResponse={URL={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}b1b1iiiiiiiiii}{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}q{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{AtomicString={String={RefPtr<WTF::StringImpl>=^{StringImpl}}}}{HTTPHeaderMap={HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::String>}iiii}}}{ResourceLoadTiming=iiiiiii}iIdddddb1b1b1b1b1b1b1b1b1b1b1b3b1{RetainPtr<_CFURLResponse *>=^v}{RetainPtr<NSURLResponse>=^v}{RetainPtr<const __CFArray *>=^v}}{RefPtr<WebCore::SharedBuffer>=^{SharedBuffer}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}B}) _coreResource;
 - (id) _initWithCoreResource:({PassRefPtr<WebCore::ArchiveResource>=^{ArchiveResource}})a;
 - (id) textEncodingName;
 - (id) _initWithData:(id)aURL:(id)bMIMEType:(id)ctextEncodingName:(id)dframeName:(id)eresponse:(id)fcopyData:(BOOL)g;
 - (void) _ignoreWhenUnarchiving;
 - (id) _initWithData:(id)aURL:(id)bresponse:(id)c;
 - (id) _suggestedFilename;
 - (id) _response;
 - (id) _stringValue;


@end
