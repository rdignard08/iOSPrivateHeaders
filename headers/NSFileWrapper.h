
@protocol NSCoding;
@interface NSFileWrapper : NSObject <NSCoding> {

    @"NSDictionary" _fileAttributes;
    @"NSString" _preferredFileName;
    @"NSString" _fileName;
    id _contents;
    id _icon;
    id _moreVars;
}
@property (atomic, assign, readonly, isDirectory) NSNumber* directory;
@property (atomic, assign, readonly, isRegularFile) NSNumber* regularFile;
@property (atomic, assign, readonly, isSymbolicLink) NSNumber* symbolicLink;
@property (atomic, copy, readwrite) NSString* preferredFilename;
@property (atomic, copy, readwrite) NSString* filename;
@property (atomic, copy, readwrite) NSDictionary* fileAttributes;
@property (atomic, copy, readonly) NSData* serializedRepresentation;
@property (atomic, copy, readonly) NSDictionary* fileWrappers;
@property (atomic, copy, readonly) NSData* regularFileContents;
@property (atomic, copy, readonly) NSURL* symbolicLinkDestinationURL;
 + (id) _pathForURL:(id)areading:(BOOL)berror:(^@)c;
 + (BOOL) _canSafelyMapFilesAtPath:(id)a;
 + (BOOL) _forPath:(id)agetItemKind:(^@)bmodificationDate:(^@)c;
 + (id) _newContentsAtURL:(id)apath:(id)bitemKind:(id)coldChildrenByUniqueFileName:(id)doptions:(unsigned long long)eerror:(^@)f;
 + (id) _temporaryDirectoryURLForWritingToURL:(id)aerror:(^@)b;
 + (BOOL) _finishWritingToURL:(id)abyTakingContentsFromItemAtURL:(id)baddingAttributes:(id)cusingTemporaryDirectoryAtURL:(id)dbackupFileName:(id)eerror:(^@)f;
 + (BOOL) _finishWritingToURL:(id)abyMovingItemAtURL:(id)baddingAttributes:(id)cerror:(^@)d;
 + (void) _removeTemporaryDirectoryAtURL:(id)a;
 + (void) _writeAttributes:(id)atoURL:(id)b;
 + (void) initialize;

 - (BOOL) isDirectory;
 - (id) fileAttributes;
 - (id) _init;
 - (BOOL) _readContentsFromURL:(id)apath:(id)bitemKind:(id)coptions:(unsigned long long)derror:(^@)e;
 - (id) preferredFilename;
 - (void) setPreferredFilename:(id)a;
 - (id) _addChild:(id)aforUniqueFileName:(id)b;
 - (void) _initDirectoryContents;
 - (id) _initWithImpl:(id)apreferredFileName:(id)buniqueFileName:(id)cdocInfo:(id)diconData:(id)e;
 - (void) _removeParent:(id)a;
 - (id) fileWrappers;
 - (void) removeFileWrapper:(id)a;
 - (id) addFileWrapper:(id)a;
 - (void) _observePreferredFileNameOfChild:(id)a;
 - (BOOL) isRegularFile;
 - (BOOL) isSymbolicLink;
 - (BOOL) _matchesItemKind:(id)amodificationDate:(id)b;
 - (BOOL) matchesContentsOfURL:(id)a;
 - (BOOL) readFromURL:(id)aoptions:(unsigned long long)berror:(^@)c;
 - (void) _removeChild:(id)aforUniqueFileName:(id)b;
 - (void) setFileAttributes:(id)a;
 - (id) filename;
 - (BOOL) writeToURL:(id)aoptions:(unsigned long long)boriginalContentsURL:(id)cerror:(^@)d;
 - (void) _forWritingToURL:(id)areturnContentsLazyReadingError:(^@)b;
 - (id) regularFileContents;
 - (id) symbolicLinkDestinationURL;
 - (void) setFilename:(id)a;
 - (void) _updateDescendantFileNames;
 - (BOOL) _writeContentsToURL:(id)apath:(id)boriginalContentsURL:(id)ctryHardLinking:(BOOL)ddidHardLinking:(^B)eerror:(^@)f;
 - (id) _attributesToWrite;
 - (id) _newImpl;
 - (void) _addParent:(id)a;
 - (id) keyForFileWrapper:(id)a;
 - (void) _resetFileModificationDate;
 - (id) _uniqueFileNameOfChild:(id)a;
 - (id) serializedRepresentation;
 - (id) initWithSerializedRepresentation:(id)a;
 - (id) initSymbolicLinkWithDestinationURL:(id)a;
 - (id) _fullDescription:(BOOL)a;
 - (void) dealloc;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithURL:(id)aoptions:(unsigned long long)berror:(^@)c;
 - (id) initRegularFileWithContents:(id)a;
 - (id) initDirectoryWithFileWrappers:(id)a;
 - (id) addRegularFileWithContents:(id)apreferredFilename:(id)b;


@end
