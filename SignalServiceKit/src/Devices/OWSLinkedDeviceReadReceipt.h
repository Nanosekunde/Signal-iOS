//
//  Copyright (c) 2019 Open Whisper Systems. All rights reserved.
//

#import "TSYapDatabaseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface OWSLinkedDeviceReadReceipt : TSYapDatabaseObject

@property (nonatomic, readonly) NSString *senderId;
@property (nonatomic, readonly) uint64_t messageIdTimestamp;
@property (nonatomic, readonly) uint64_t readTimestamp;

- (instancetype)initWithSenderId:(NSString *)senderId
              messageIdTimestamp:(uint64_t)messageIdtimestamp
                   readTimestamp:(uint64_t)readTimestamp;

// --- CODE GENERATION MARKER

// This snippet is generated by /Scripts/sds_codegen/sds_generate.py. Do not manually edit it, instead run
// `sds_codegen.sh`.

// clang-format off

- (instancetype)initWithUniqueId:(NSString *)uniqueId
              messageIdTimestamp:(uint64_t)messageIdTimestamp
                   readTimestamp:(uint64_t)readTimestamp
                        senderId:(NSString *)senderId
NS_SWIFT_NAME(init(uniqueId:messageIdTimestamp:readTimestamp:senderId:));

// clang-format on

// --- CODE GENERATION MARKER

+ (nullable OWSLinkedDeviceReadReceipt *)findLinkedDeviceReadReceiptWithSenderId:(NSString *)senderId
                                                              messageIdTimestamp:(uint64_t)messageIdTimestamp
                                                                     transaction:
                                                                         (YapDatabaseReadTransaction *)transaction;

@end

NS_ASSUME_NONNULL_END
