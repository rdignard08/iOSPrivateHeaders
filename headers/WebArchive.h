
@protocol NSCoding, NSCopying;
@interface WebArchive : NSObject <NSCoding, NSCopying> {

    @"WebArchivePrivate" _private;
}
@property (nonatomic, assign, readonly) WebResource* mainResource;
@property (nonatomic, copy, readonly) NSArray* subresources;
@property (nonatomic, copy, readonly) NSArray* subframeArchives;
@property (nonatomic, copy, readonly) NSData* data;
 + (id) bundleForClass;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) data;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithData:(id)a;
 - (id) subresources;
 - (id) initWithMainResource:(id)asubresources:(id)bsubframeArchives:(id)c;
 - (id) mainResource;
 - (id) subframeArchives;
 - (id) _initWithCoreLegacyWebArchive:({PassRefPtr<WebCore::LegacyWebArchive>=^{LegacyWebArchive}})a;
 - (^{LegacyWebArchive=^^?I{RefPtr<WebCore::ArchiveResource>=^{ArchiveResource}}{Vector<WTF::RefPtr<WebCore::ArchiveResource>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::ArchiveResource>}II}{Vector<WTF::RefPtr<WebCore::Archive>, 0, WTF::CrashOnOverflow>=^{RefPtr<WebCore::Archive>}II}}) _coreLegacyWebArchive;


@end
