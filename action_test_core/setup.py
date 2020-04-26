from setuptools import setup

package_name = 'action_test_core'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='edyta',
    maintainer_email='edyta@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'client = ' + package_name + '.client:main',
            'client_cancel = ' + package_name + '.client_cancel:main',
            'client_not_composable = ' + package_name + '.client_not_composable:main',
            'averaging_server = ' + package_name + '.averaging_server:main',
            'random_number = ' + package_name + '.random_number_gen:main'
        ],
    },
)
