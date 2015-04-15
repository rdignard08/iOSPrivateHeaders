
@interface BSLaunchdUtilities : NSObject {

}
 + (id) allJobLabels;
 + (void) deleteJobWithLabel:(id)a;
 + (BOOL) createJobWithLabel:(id)abundleIdentifier:(id)bpath:(id)ccontainerPath:(id)darguments:(id)eenvironment:(id)fstandardOutputPath:(id)gstandardErrorPath:(id)hmachServices:(id)ithreadPriority:(q)jwaitForDebugger:(BOOL)kdenyCreatingOtherJobs:(BOOL)lrunAtLoad:(BOOL)mdisableASLR:(BOOL)nsystemApp:(BOOL)o;
 + (BOOL) stopJobWithLabel:(id)a;
 + (BOOL) startJobWithLabel:(id)a;
 + (i) pidForLabel:(id)a;
 + (id) labelForPID:(i)a;
 + (Q) lastExitReasonForLabel:(id)a;
 + (void) deleteAllJobsWithLabelPrefix:(id)a;
 + (id) currentJobLabel;



@end
