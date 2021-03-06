
@interface NSFileAttributes : NSDictionary {

    NSMutableDictionary* dict;
    {stat="st_dev"i"st_mode"S"st_nlink"S"st_ino"Q"st_uid"I"st_gid"I"st_rdev"i"st_atimespec"{timespec="tv_sec"q"tv_nsec"q}"st_mtimespec"{timespec="tv_sec"q"tv_nsec"q}"st_ctimespec"{timespec="tv_sec"q"tv_nsec"q}"st_birthtimespec"{timespec="tv_sec"q"tv_nsec"q}"st_size"q"st_blocks"q"st_blksize"i"st_flags"I"st_gen"I"st_lspare"i"st_qspare"[2q]} statInfo;
    {?="extensionHidden"B"creationDate"@"NSDate""validFields"{_fields="extensionHidden"b1"creationDate"b1"reserved"b30}} catInfo;
    NSDictionary* extendedAttrs;
}
 + (id) _attributesAtPath:(id)apartialReturn:(BOOL)bfilterResourceFork:(BOOL)cerror:(^@)d;
 + (id) attributesWithStat:(^{stat=iSSQIIi{timespec=qq}{timespec=qq}{timespec=qq}{timespec=qq}qqiIIi[2q]})a;
 + (id) attributesAtPath:(id)atraverseLink:(BOOL)b;
 + (id) _attributesAtURL:(id)apartialReturn:(BOOL)bfilterResourceFork:(BOOL)cerror:(^@)d;

 - (id) fileModificationDate;
 - (id) fileType;
 - (unsigned long long) filePosixPermissions;
 - (id) fileOwnerAccountName;
 - (unsigned long long) fileOwnerAccountNumber;
 - (id) fileGroupOwnerAccountName;
 - (unsigned long long) fileGroupOwnerAccountNumber;
 - (long long) fileSystemNumber;
 - (unsigned long long) fileSystemFileNumber;
 - (BOOL) isDirectory;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a ;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a ;
 - (id) keyEnumerator;
 - (unsigned long long) fileSize;


@end
