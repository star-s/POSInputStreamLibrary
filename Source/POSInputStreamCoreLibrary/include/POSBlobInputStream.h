//
//  POSBlobInputStream.h
//  POSBlobInputStreamLibrary
//
//  Created by Pavel Osipov on 02.07.13.
//  Copyright (c) 2013 Pavel Osipov. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSErrorDomain const POSBlobInputStreamErrorDomain;

typedef NS_ERROR_ENUM(POSBlobInputStreamErrorDomain, POSBlobInputStreamError) {
    codeDataSourceFailure = 0
};

@protocol POSBlobInputStreamDataSource;

@interface POSBlobInputStream : NSInputStream

@property (nonatomic, assign) BOOL shouldNotifyCoreFoundationAboutStatusChange;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithData:(NSData *)data NS_UNAVAILABLE;
- (nullable instancetype)initWithURL:(NSURL *)url NS_UNAVAILABLE;

// Designated initializer.
- (instancetype)initWithDataSource:(NSObject<POSBlobInputStreamDataSource> *)dataSource;

@end

NS_ASSUME_NONNULL_END
