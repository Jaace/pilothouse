define( 'WP_DEBUG', true );
define( 'SCRIPT_DEBUG', true );
define( 'JETPACK_DEV_DEBUG', true );
define( 'JETPACK_STAGING_MODE', true );

global $memcached_servers;
$memcached_servers = [ 'default' => [ 'memcached:11211' ] ];
define( 'WP_CACHE_KEY_SALT', '' );
